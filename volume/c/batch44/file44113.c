// fichero 44113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44113;

Registro44113 crear_registro44113(int id) {
    Registro44113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
