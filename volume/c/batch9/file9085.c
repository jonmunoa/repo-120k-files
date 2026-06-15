// fichero 9085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9085;

Registro9085 crear_registro9085(int id) {
    Registro9085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
