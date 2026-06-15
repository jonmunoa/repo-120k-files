// fichero 9325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9325;

Registro9325 crear_registro9325(int id) {
    Registro9325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
