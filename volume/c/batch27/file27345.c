// fichero 27345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27345;

Registro27345 crear_registro27345(int id) {
    Registro27345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
