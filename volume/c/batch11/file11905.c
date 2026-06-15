// fichero 11905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11905;

Registro11905 crear_registro11905(int id) {
    Registro11905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
