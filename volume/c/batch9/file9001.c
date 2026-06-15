// fichero 9001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9001;

Registro9001 crear_registro9001(int id) {
    Registro9001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
