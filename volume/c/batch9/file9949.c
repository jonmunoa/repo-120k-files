// fichero 9949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9949;

Registro9949 crear_registro9949(int id) {
    Registro9949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
