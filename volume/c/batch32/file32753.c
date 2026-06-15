// fichero 32753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32753;

Registro32753 crear_registro32753(int id) {
    Registro32753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
