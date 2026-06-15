// fichero 2093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2093;

Registro2093 crear_registro2093(int id) {
    Registro2093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
