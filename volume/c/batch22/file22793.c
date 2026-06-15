// fichero 22793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22793;

Registro22793 crear_registro22793(int id) {
    Registro22793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
