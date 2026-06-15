// fichero 9589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9589;

Registro9589 crear_registro9589(int id) {
    Registro9589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
