// fichero 9997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9997;

Registro9997 crear_registro9997(int id) {
    Registro9997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
