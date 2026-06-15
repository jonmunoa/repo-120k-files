// fichero 9645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9645;

Registro9645 crear_registro9645(int id) {
    Registro9645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
