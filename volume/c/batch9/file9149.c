// fichero 9149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9149;

Registro9149 crear_registro9149(int id) {
    Registro9149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
