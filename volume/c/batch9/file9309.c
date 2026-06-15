// fichero 9309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9309;

Registro9309 crear_registro9309(int id) {
    Registro9309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
