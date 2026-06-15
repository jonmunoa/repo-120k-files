// fichero 42149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42149;

Registro42149 crear_registro42149(int id) {
    Registro42149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
