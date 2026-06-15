// fichero 26149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26149;

Registro26149 crear_registro26149(int id) {
    Registro26149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
