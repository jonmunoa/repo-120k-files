// fichero 31977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31977;

Registro31977 crear_registro31977(int id) {
    Registro31977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
