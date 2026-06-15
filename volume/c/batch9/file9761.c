// fichero 9761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9761;

Registro9761 crear_registro9761(int id) {
    Registro9761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
