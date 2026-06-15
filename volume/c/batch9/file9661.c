// fichero 9661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9661;

Registro9661 crear_registro9661(int id) {
    Registro9661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
