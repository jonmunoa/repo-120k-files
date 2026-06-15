// fichero 9057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9057;

Registro9057 crear_registro9057(int id) {
    Registro9057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
