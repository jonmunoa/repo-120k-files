// fichero 20061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20061;

Registro20061 crear_registro20061(int id) {
    Registro20061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
