// fichero 9897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9897;

Registro9897 crear_registro9897(int id) {
    Registro9897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
