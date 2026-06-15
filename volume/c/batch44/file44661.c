// fichero 44661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44661;

Registro44661 crear_registro44661(int id) {
    Registro44661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
