// fichero 42697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42697;

Registro42697 crear_registro42697(int id) {
    Registro42697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
