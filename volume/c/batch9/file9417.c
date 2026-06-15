// fichero 9417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9417;

Registro9417 crear_registro9417(int id) {
    Registro9417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
