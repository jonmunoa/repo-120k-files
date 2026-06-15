// fichero 22829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22829;

Registro22829 crear_registro22829(int id) {
    Registro22829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
