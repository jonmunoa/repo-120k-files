// fichero 7769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7769;

Registro7769 crear_registro7769(int id) {
    Registro7769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
