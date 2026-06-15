// fichero 35817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35817;

Registro35817 crear_registro35817(int id) {
    Registro35817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
