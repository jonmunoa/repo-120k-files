// fichero 42777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42777;

Registro42777 crear_registro42777(int id) {
    Registro42777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
