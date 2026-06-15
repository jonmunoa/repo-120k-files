// fichero 7165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7165;

Registro7165 crear_registro7165(int id) {
    Registro7165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
