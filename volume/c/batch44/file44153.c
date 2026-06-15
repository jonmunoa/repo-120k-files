// fichero 44153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44153;

Registro44153 crear_registro44153(int id) {
    Registro44153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
