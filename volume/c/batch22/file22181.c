// fichero 22181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22181;

Registro22181 crear_registro22181(int id) {
    Registro22181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
