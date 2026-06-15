// fichero 7941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7941;

Registro7941 crear_registro7941(int id) {
    Registro7941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
