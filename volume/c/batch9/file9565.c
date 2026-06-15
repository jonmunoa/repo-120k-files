// fichero 9565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9565;

Registro9565 crear_registro9565(int id) {
    Registro9565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
