// fichero 18585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18585;

Registro18585 crear_registro18585(int id) {
    Registro18585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
