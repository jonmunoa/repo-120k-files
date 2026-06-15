// fichero 9221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9221;

Registro9221 crear_registro9221(int id) {
    Registro9221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
