// fichero 9333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9333;

Registro9333 crear_registro9333(int id) {
    Registro9333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
