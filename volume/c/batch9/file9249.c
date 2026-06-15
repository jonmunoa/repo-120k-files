// fichero 9249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9249;

Registro9249 crear_registro9249(int id) {
    Registro9249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
