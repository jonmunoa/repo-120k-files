// fichero 42849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42849;

Registro42849 crear_registro42849(int id) {
    Registro42849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
