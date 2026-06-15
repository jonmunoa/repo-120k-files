// fichero 9777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9777;

Registro9777 crear_registro9777(int id) {
    Registro9777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
