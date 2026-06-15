// fichero 9313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9313;

Registro9313 crear_registro9313(int id) {
    Registro9313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
