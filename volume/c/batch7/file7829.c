// fichero 7829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7829;

Registro7829 crear_registro7829(int id) {
    Registro7829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
