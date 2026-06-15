// fichero 7093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7093;

Registro7093 crear_registro7093(int id) {
    Registro7093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
