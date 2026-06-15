// fichero 9969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9969;

Registro9969 crear_registro9969(int id) {
    Registro9969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
