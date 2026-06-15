// fichero 28149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28149;

Registro28149 crear_registro28149(int id) {
    Registro28149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
