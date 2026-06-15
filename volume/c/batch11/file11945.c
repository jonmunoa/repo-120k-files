// fichero 11945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11945;

Registro11945 crear_registro11945(int id) {
    Registro11945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
