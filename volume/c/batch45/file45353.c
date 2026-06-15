// fichero 45353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45353;

Registro45353 crear_registro45353(int id) {
    Registro45353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
