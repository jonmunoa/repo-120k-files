// fichero 42897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42897;

Registro42897 crear_registro42897(int id) {
    Registro42897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
