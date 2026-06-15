// fichero 24649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24649;

Registro24649 crear_registro24649(int id) {
    Registro24649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
