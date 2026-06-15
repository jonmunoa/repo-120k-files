// fichero 37877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37877;

Registro37877 crear_registro37877(int id) {
    Registro37877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
