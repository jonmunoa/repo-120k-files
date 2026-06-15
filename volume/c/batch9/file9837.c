// fichero 9837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9837;

Registro9837 crear_registro9837(int id) {
    Registro9837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
