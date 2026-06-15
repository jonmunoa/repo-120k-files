// fichero 6777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6777;

Registro6777 crear_registro6777(int id) {
    Registro6777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
