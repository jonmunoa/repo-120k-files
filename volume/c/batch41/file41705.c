// fichero 41705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41705;

Registro41705 crear_registro41705(int id) {
    Registro41705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
