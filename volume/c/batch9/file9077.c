// fichero 9077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9077;

Registro9077 crear_registro9077(int id) {
    Registro9077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
