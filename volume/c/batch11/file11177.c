// fichero 11177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11177;

Registro11177 crear_registro11177(int id) {
    Registro11177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
